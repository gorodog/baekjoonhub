import sys
import heapq

sys.setrecursionlimit(10000)
input = sys.stdin.readline

class Node:
    def __init__(self, type_char='.', ew=0, ns=0):
        self.type = type_char
        self.ew = ew
        self.ns = ns

    def is_valid(self):
        return self.type != '.'

    def entry_time(self, t, direction):
        if self.type == '-':
            r = t % (self.ew + self.ns)
            if direction == 'EW' and r >= self.ew:
                t += self.ew + self.ns - r
            if direction == 'NS' and r < self.ew:
                t += self.ew - r
        elif self.type == '|':
            r = t % (self.ew + self.ns)
            if direction == 'EW' and r < self.ns:
                t += self.ns - r
            if direction == 'NS' and r >= self.ns:
                t += self.ns + self.ew - r
        return t + 1


class Streets:
    def __init__(self, rows, cols):
        self.r = rows
        self.c = cols
        self.raw = []
        self.nodes = [[Node() for _ in range(cols)] for _ in range(rows)]
        self.ar = self.ac = -1

    def read_map(self, lines):
        self.raw = lines
        for i in range(self.r):
            for j in range(self.c):
                char = self.raw[i][j]
                if char == 'A':
                    self.ar, self.ac = i, j
                if not char.isdigit():
                    self.nodes[i][j] = Node(char)

    def lights(self):
        n = 0
        for row in self.raw:
            for ch in row:
                if ch.isdigit():
                    n = max(n, int(ch) + 1)
        return n

    def set_light(self, light, direction, ew, ns):
        for i in range(self.r):
            for j in range(self.c):
                if self.raw[i][j] == light:
                    self.nodes[i][j] = Node(direction, ew, ns)

    def construct(self):
        for i in range(self.r):
            for j in range(self.c):
                char = self.raw[i][j]
                if char == 'A':
                    self.ar, self.ac = i, j
                if not char.isdigit():
                    self.nodes[i][j] = Node(char)

    def drive(self):
        INF = 1 << 30
        seen = [[INF] * self.c for _ in range(self.r)]
        pq = []
        heapq.heappush(pq, (0, self.ar, self.ac))

        while pq:
            t, i, j = heapq.heappop(pq)
            if self.nodes[i][j].type == 'B':
                return t
            if t < seen[i][j]:
                seen[i][j] = t
                
                for di, dj, direction in [(-1, 0, 'NS'), (1, 0, 'NS'), (0, -1, 'EW'), (0, 1, 'EW')]:
                    ni, nj = i + di, j + dj
                    if 0 <= ni < self.r and 0 <= nj < self.c and self.nodes[ni][nj].is_valid():
                        new_t = self.nodes[ni][nj].entry_time(t, direction)
                        heapq.heappush(pq, (new_t, ni, nj))
                # 동서
                # for dj in [-1, 1]:
                    # nj = j + dj
                    # if 0 <= nj < self.c and self.nodes[i][nj].is_valid():
                        # nt = self.nodes[i][nj].entry_time(t, 'EW')
                        # heapq.heappush(pq, (nt, i, nj))

                # 남북
                # for di in [-1, 1]:
                    # ni = i + di
                    # if 0 <= ni < self.r and self.nodes[ni][j].is_valid():
                        # nt = self.nodes[ni][j].entry_time(t, 'NS')
                        # heapq.heappush(pq, (nt, ni, j))
        return -1 #불가능 > inpossible 출력


def main():
    lines = sys.stdin.read().splitlines()
    idx = 0

    while idx < len(lines):
        if lines[idx].strip() == '':
            idx += 1
            continue

        m, n = map(int, lines[idx].split())
        idx += 1
        if m == 0 or n == 0:
            break

        s = Streets(m, n)
        map_lines = lines[idx:idx + m]
        s.read_map(map_lines)
        idx += m

        for _ in range(s.lights()):
            light_info = lines[idx].split()
            light = light_info[0]
            dir_ = light_info[1]
            ew, ns = map(int, light_info[2:])
            s.set_light(light, dir_, ew, ns)
            idx += 1

        s.construct()
        res = s.drive()
        print(res if res > 0 else "impossible")

if __name__ == "__main__":
    main()
