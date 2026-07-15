#include <stdio.h>
#include <curl/curl.h>


int main(){
    printf("Hello world\n");

    CURLcode result = curl_global_init(CURL_GLOBAL_ALL);
    if (result != CURLE_OK)
        return (int)result;
    

}