# Калькулятор в Windows Forms
## Пример работы
![ezgif-3-bd2c90fe27](https://github.com/Sazukiro/Calculator-Windows-Forms/assets/133951840/9fb5465b-effe-433e-9cc8-e63212ffd998)

## О моей работе
Windows Forms — интерфейс программирования приложений, отвечающий за графический интерфейс пользователя и являющийся частью Microsoft .NET Framework. Весь дизайн моей работы был сделан в конструкторе файла MyForm.h, но чтобы начать в нём работать необходимо было вписать в связанный с ним cpp-файл код:

```cpp
#include "MyForm.h"

#include <Windows.h>

using namespace Project1;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}
```
В работе использовались такие элементы управления как: Button(кнопка) и TextBox. Кнопки у меня испльзовались для выбора математических действий, а TextBox для ввода двух переменных и последующего вывода результата.


