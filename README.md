# Калькулятор в Windows Forms
## Пример работы
![ezgif-3-bd2c90fe27](https://github.com/Sazukiro/Calculator-Windows-Forms/assets/133951840/9fb5465b-effe-433e-9cc8-e63212ffd998)

---

## О моей работе
Windows Forms — интерфейс программирования приложений, отвечающий за графический интерфейс пользователя и являющийся частью Microsoft .NET Framework. Весь дизайн моей работы был сделан в конструкторе файла `"MyForm.h"`, но чтобы начать в нём работать необходимо было вписать в связанный с ним cpp-файл код:

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
В работе использовались такие элементы управления как: `"Button(кнопка)"` и `"TextBox"`. Кнопки у меня испльзовались для выбора математических действий, а `"TextBox"` для ввода двух переменных и последующего вывода результата.

![image](https://github.com/Sazukiro/Calculator-Windows-Forms/assets/133951840/f1b7cdb2-fe25-4c7f-acf6-d4cbc89253f9) ![image](https://github.com/Sazukiro/Calculator-Windows-Forms/assets/133951840/a0f8af70-83b5-46e6-b89a-6960320ef3e9)


Также я заменил фон некоторым кнопкам на скачанные картинки в настройках кнопок с помощью парраметра `"BackgroundImage"`, и растянул их, выбрав в `"BackgroundImageLayout"` свойство `Zoom`. Также с помощью свойства `"Cursor"` сделал так, чтобы при наведении на кнопку и поле ввода курсор менялся.

![image](https://github.com/Sazukiro/Calculator-Windows-Forms/assets/133951840/0df69e12-8553-48ff-8451-8e61cb4ee344)![image](https://github.com/Sazukiro/Calculator-Windows-Forms/assets/133951840/23699f79-87a5-4ba9-a0f5-ad43b400bf9c)

Далее в файле `"MyForm.h"` создал float переменные `number1` и `number2`, в которых будут храниться введёные нами значения чисел.

```cpp
#pragma endregion
float number1, number2;
String^ operation;
```
Ещё я исключил ввод букв и ненужных символов, указав ввод только клавишами с цифрами. При вводе же букв они автоматически стераются.

```cpp
private: System::Void textResult_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if ((e->KeyValue) < 48 || e->KeyValue > 59) {
		textResult->Text = str;
	}
}
```
Для конвертации текста в число, числа в текст я использовал функции `"Convert::ToInt32"` и `"Convert::ToString"`.

Пример:

```cpp
number1 = Convert::ToInt32(textResult->Text);
textResult->Text = Convert::ToString(number1 + number2);
```

После ввода первого числа и последующем нажатии математического действия (+, -, *, /), данные действия записываются в `number1` и `operation`, после чего очищается окно ввода-вывода `"TextBox"` для последующего ввода второго числа `number2`.

```cpp
private: System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	number1 = Convert::ToInt32(textResult->Text);
	operation = "+";
	textResult->Clear();
}
private: System::Void buttonTimes_Click(System::Object^ sender, System::EventArgs^ e) {
	number1 = Convert::ToInt32(textResult->Text);
	operation = "*";
	textResult->Clear();
}
private: System::Void buttonDivide_Click(System::Object^ sender, System::EventArgs^ e) {
	number1 = Convert::ToInt32(textResult->Text);
	operation = "/";
	textResult->Clear();
}
private: System::Void buttonMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	number1 = Convert::ToInt32(textResult->Text);
	operation = "-";
	textResult->Clear();
}
```
Потом после вводе второго числа `number2` и последущем нажатии кнопки равенства выполнялись следующие действия:

1) Конвертация введёного значения из текста в число и его озапись в переменную `number2`.
2) Очиста `"TextBox"` для послеющего вывода ответа.
3) Выполнение математического действия между `number1` и `number2` в зависимости от выбранной операции (переменной `operation`), конвертация в текст полученного числа и последующий его вывод в окне `"TextBox"`.
