#include <emoji/🤔.h>

#include <iostream>
#include <stdint.h>
#include <string>
#include <vector>

using 🖼 = std::vector<uint8_t>;
using 🤮 = std::string;

🤔<🖼, 🤮> load(std::string path) { return {"not implemented yet"}; }

int main(int argc, char *argv[]) {
  // TODO: derive path from command line
  auto 😇 = load("/tmp/test.jpg");
  if (😇.is_💥()) {
    std::cerr << 😇.💥() << std::endl;
    return 1;
  }

  auto 🥓 = 😇.🗃();
  // TODO: render image
}
