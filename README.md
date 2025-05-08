#   C-Beginner-Exercises

   This repository contains C programming exercises for beginners.

   ##   How to Compile and Run

   To compile and run the C exercise files in this repository, follow these steps:

   **Prerequisites:**

   * You need a C compiler installed on your system (e.g., GCC).

   **Instructions:**

   1.  **Clone or download the repository:** Obtain the exercise files by cloning the repository using Git or downloading them as a ZIP archive.
   2.  **Navigate to the exercise directory:** Open your terminal or command prompt and use the `cd` command to go to the directory containing the exercise file you want to compile. For example:

       ```bash
       cd C-Beginner-Exercises/exercise_name
       ```

   3.  **Compile the C file:** Use the `gcc` command to compile the `.c` file. Replace `exercise_file.c` with the actual name of the file:

       ```bash
       gcc exercise_file.c -o exercise_executable
       ```

   4.  **Run the executable:** Execute the compiled program:

       * **Linux/macOS:**

           ```bash
           ./exercise_executable
           ```

       * **Windows:**

           ```bash
           exercise_executable.exe
           ```

   **Example:**

   If you want to compile and run the `Hello-word-basic-operations.c` exercise, the commands would be:

   ```bash
   gcc Hello-word-basic-operations.c -o hello_world
   ./hello_world  #  (or hello_world.exe on Windows)
