SRC = src/pnggrain.c
BIN = bin/pnggrain

$(BIN): $(SRC)
	cc -o $(BIN) $(SRC) `pkg-config --libs --cflags libpng`

examples: $(BIN)
	mkdir -p examples
	find examples -type f -name '*.png' -exec rm {} +
	bin/pnggrain examples/example.png
	bin/pnggrain -n examples/opaque.png
	bin/pnggrain -d examples/darken-only.png
	bin/pnggrain -b examples/brighten-only.png

.PHONY: examples
