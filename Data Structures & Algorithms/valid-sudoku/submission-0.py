class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:

        for r in range(9):
            seen = set()
            for c in range(9):
                num = board[r][c]
                if num == '.':
                    continue
                if num in seen:
                    return False
                seen.add(num)

        for c in range(9):
            seen = set()
            for r in range(9):
                num = board[r][c]
                if num == '.':
                    continue
                if num in seen:
                    return False
                seen.add(num)
        for box_r in range(0, 9, 3):
            for box_c in range(0, 9, 3):
                seen = set()

                for r in range(box_r, box_r + 3):
                    for c in range(box_c, box_c + 3):
                        num = board[r][c]

                        if num == '.':
                            continue

                        if num in seen:
                            return False

                        seen.add(num)

        return True