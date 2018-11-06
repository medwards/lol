#include <cassert>
#include <variant>

// Basic Result class
template <class 🗃Type, class 💥Type> class 🤔 {
public:
  🤔(🗃Type 🗃) : m_📓(std::move(🗃)){};
  🤔(💥Type 💥) : m_📓(std::move(💥)){};

  bool is_💥() const { return m_📓.index() == 1; }
  bool is_😊() const { return m_📓.index() == 0; }

  💥Type &💥() {
    assert(is_💥());
    return std::get<💥Type>(m_📓);
  };
  🗃Type &🗃() {
    assert(is_😊());
    return std::get<🗃Type>(m_📓);
  };

private:
  std::variant<🗃Type, 💥Type> m_📓;
};
