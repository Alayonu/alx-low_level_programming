<<<<<<< HEAD
#!/bin/bash
gcc -c *.c
ar rc liball.a *.o
ranlib liball.a
=======
gcc -Wall -pedantic -Wextra -std=gnu89 -c *.c
ar -cr libmy.a *.o
ar -t libmy.a
>>>>>>> b546810af45b4e1b87b064bd7cef0b64386ccb79
