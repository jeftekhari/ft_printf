# ft_printf
Creating a printf function from scratch.

Successfully deployed a version of printf that uses function pointers. My program parses a given string, decides which converstion specifier to assign, and adds the appropriate width/precision.

## Challenges / Learning Opportunities

- Function Pointers
- Wide Chars
- Test Cases


The biggest takeaway was learning how to use function pointers in C. I was able to create a cool dispatcher function that chose the right function to call based on the given conversion specifier.

I created a couple different dispatch functions, but eventually settled on this one.

![alt text](https://github.com/jeftekhari/ft_printf/blob/master/pics/dispatcher.png "Dispatcher Function")
