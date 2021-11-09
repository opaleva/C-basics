#include "utils/grid.h"

int main(void) {
    start_grid();
//    int position[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int position[9] = {1, -1, 0, 1, -1, -1, -1, 1, 0};
//    def get_move() -> Move:
//    next_move: Move = Move(-1)
//    while next_move not in grid.possible_moves:
//    next_turn: int = int(input('Номер клетки для хода (от 1 до 9): '))
//    next_move = Move(next_turn - 1)
//    return next_move
    basic_grid(position);

    return 0;
}
