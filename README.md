# lldj
Could be used for lottery random number selection

By default, this program selects 6 distinct numbers between 1 and 42.
If you want to change this, you can call it with arguments as below:

```bash
./lldj <lower_limit> <upper_limit> <num_guesses>
```

### Prerequisites

- C compiler. This project was developed using gcc on Linux.

### Building

```bash
$ git clone https://github.com/panv-00/lldj.git
...

$ cd lldj
...

$ make
make[1]: Entering directory './lldj/build'
gcc -o ../lldj ../src/lldj.c \
        -Wall -O3 -g
make[1]: Leaving directory './lldj/build'

# now you can run with:
$ ./lldj

# copy this executable anywhere you like (i.e. ~/.bin or ~/.local/bin)
```

## License

This project is licensed under the MIT License - see the LICENSE file for details.
