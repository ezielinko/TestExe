# TestExe

Napisz program, którego zadaniem będzie dopisanie ciągu znaków na końcu wybranego pliku. Sam proces zapisu do pliku zawrzyj w interfejsie, który powinien składać się z:

konstruktora, w którym otwieramy plik (+ tworzymy, jeśli wcześniej nie istnieje)
destruktora, w którym zamykamy plik
funkcji write() do zapisu do pliku.
Przygotuj dwie implementacje takiego interfejsu:

wykorzystującą userspace'owe funkcje Linuxa: open(), write(), close():

https://man7.org/linux/man-pages/man2/open.2.html

https://man7.org/linux/man-pages/man2/write.2.html

https://man7.org/linux/man-pages/man2/close.2.html

wykorzystującą standardowe biblioteki C++ do operacji na plikach.

Program chcemy wywoływać z linii komend z minimum trzema argumentami:

którą metodą zrobić zapis (linuksową, czy standardową); można zmapować to na liczby, tzn. 0 oznacza metodę linuksową, 1 oznacza metodę standardową
nazwa pliku, do którego chcemy zrobić zapis
ciąg znaków, który chcemy zapisać. Możemy dać tu więcej niż 1 wyraz, wtedy każdy kolejny powinien zostać zapisany w nowej linii.
Przeprowadź walidację argumentów wejściowych; jeśli liczba argumentów jest mniejsza niż wymagana, lub jeśli podamy nieprawidłową metodę, wyprintuj informacje pomocnicze.

Całość możesz zawrzeć w pojedynczym pliku .cpp.

Zadanie dodatkowe: Wyciągnij interfejs i implementacje do osobnych plików .hpp i .cpp. Następnie napisz prosty skrypt CMake lub Meson do budowania całego mini-projektu.
