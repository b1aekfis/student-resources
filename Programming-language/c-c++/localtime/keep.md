#  localtime()

The localtime() function is defined in \<ctime> header file.

```c++
struct tm* localtime(const time_t* timer);
```
The localtime() function takes a pointer of type `time_t` as its argument and returns a pointer object of structure `tm`. The value returned by localtime() function is the local time.

Then, the hours, minutes and seconds can be accessed using `tm_hour`, `tm_min`, `tm_sec`,... respectively.

# time()

The time() function is defined in \<ctime> header file.

```c++
time_t time (time_t* timer);
```

The time() function takes a pointer of type `time_t` as its argument and returns a value of type `time_t`. The value returned by time() function is a number of seconds has passed since 1970-01-01 00:00:00.

exam:

```c++
#include <iostream>
#include <ctime>

using namespace std;

int main() {

  // use time() with NULL argument
  cout << time(NULL);

  return 0;
}
  // Output is a number of seconds 
  // has passed since 1970-01-01 00:00:00.
```

and if the argument is not a null pointer, it also sets this value to the object pointed by *timer* 

```c++
#include <iostream>
#include <ctime>

using namespace std;

int main() {

  time_t rawtime;

  // the object pointed by timer: time_t* timer = &rawtime;
  time(&rawtime);

  cout << rawtime;

  return 0;
}
  // Output is a number of seconds 
  // has passed since 1970-01-01 00:00:00.
```


