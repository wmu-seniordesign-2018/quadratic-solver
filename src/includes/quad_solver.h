/* Command Line Quadratic Solver
   TEAM: Ali Itani, Nathan Hleman, Xavier Gray
   Kapenga Inc., LICENSE: GPL 2.0      */
#include "read_line.h"
#include "log_output.h"
#include "validate_line.h"
#include "q_solve.h"
#include "format_line.h"
#include "outline.h"

/* header file for quad_solver.c */
int n;                              // Buffer Size.
float a, b, c;                      // Input variables for quadratic equation.
float root_1, root_2;               // Root solution(s) to quadratic equation.
int solution;                       // Type of soluton.
char * buffer;                      // Output buffer.
int counter;                        // Counter for the number of equations asker by the user.
