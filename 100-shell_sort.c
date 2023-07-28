(base) ➜  sorting_algorithms git:(main) ✗ nvim 0-bubble_sort.c
(base) ➜  sorting_algorithms git:(main) ✗ nvim 0-O
(base) ➜  sorting_algorithms git:(main) ✗ git add .
(base) ➜  sorting_algorithms git:(main) ✗ git commit -m 'task 0'
[main 5dc1a8a] task 0
 4 files changed, 110 insertions(+)
 create mode 100644 0-O
 create mode 100644 0-bubble_sort.c
 create mode 100644 deck.h
 create mode 100644 sort.h
(base) ➜  sorting_algorithms git:(main) git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 4 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (6/6), 1.30 KiB | 1.30 MiB/s, done.
Total 6 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.com/YoTi1412/sorting_algorithms.git
   29a7e1d..5dc1a8a  main -> main
(base) ➜  sorting_algorithms git:(main) git add .
(base) ➜  sorting_algorithms git:(main) ✗ git commit -m 'task 0'
[main 163d103] task 0
 2 files changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 .DS_Store
 create mode 100755 deck
(base) ➜  sorting_algorithms git:(main) git push
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 4 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 4.14 KiB | 1.38 MiB/s, done.
Total 4 (delta 2), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (2/2), completed with 1 local object.
To https://github.com/YoTi1412/sorting_algorithms.git
   5dc1a8a..163d103  main -> main
(base) ➜  sorting_algorithms git:(main) git add .
(base) ➜  sorting_algorithms git:(main) ✗ git commit -m 'task 1&2'
[main 89b2f6a] task 1&2
 5 files changed, 85 insertions(+)
 create mode 100644 1-O
 create mode 100644 1-insertion_sort_list.c
 create mode 100644 2-O
 create mode 100644 2-selection_sort.c
(base) ➜  sorting_algorithms git:(main) git push
Enumerating objects: 8, done.
Counting objects: 100% (8/8), done.
Delta compression using up to 4 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (6/6), 1.53 KiB | 391.00 KiB/s, done.
Total 6 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/YoTi1412/sorting_algorithms.git
   163d103..89b2f6a  main -> main
(base) ➜  sorting_algorithms git:(main) git add .
(base) ➜  sorting_algorithms git:(main) ✗ git commit -m 'task 3'
[main c7b056c] task 3
 3 files changed, 81 insertions(+)
 create mode 100644 3-O
 create mode 100644 3-quick_sort.c
(base) ➜  sorting_algorithms git:(main) git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 4 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (5/5), 1.04 KiB | 531.00 KiB/s, done.
Total 5 (delta 2), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/YoTi1412/sorting_algorithms.git
   89b2f6a..c7b056c  main -> main
(base) ➜  sorting_algorithms git:(main) git add .
(base) ➜  sorting_algorithms git:(main) ✗ git commit -m 'task 4&5'
[main 9687904] task 4&5
 4 files changed, 111 insertions(+)
 create mode 100644 100-shell_sort.c
 create mode 100644 101-O
 create mode 100644 101-cocktail_sort_list.c
(base) ➜  sorting_algorithms git:(main) git push
Enumerating objects: 7, done.
  100-shell_sort.c 
  _calloc
   13 ▏   for (i = 0; i < (nmemb * size); i++)
   12 ▏   ▏   char_ptr[i] = '\0';
   11 ▏   ▏
   10 ▏   return p;
    9 }
    8
    7 /**
    6  * counting_sort - this is a counting sort method implementation
    5  * @array: array to sort
    4  * @size: array size
    3  */
    2 void counting_sort(int *array, size_t size)
    1 {
  37  ▏   int index, maximun = 0, *counter = NULL, *tmp = NULL;
    1 ▏   size_t i;
    2 ▏
    3 ▏   if (array == NULL || size < 2)
    4 ▏   ▏   return;
    5 ▏
    6 ▏   /* Find maximum number */
    7 ▏   for (i = 0; i < size; i++)
    8 ▏   {
    main    c                                            TS   37:1  42% ▄▄
