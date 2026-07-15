#include <stdio.h>
#include <curl/curl.h>


int main(){
    printf("Hello world\n");

    CURL *curl;
    CURLcode result;

    result =  curl_global_init(CURL_GLOBAL_ALL);
    if (result != CURLE_OK)
        return (int)result;
    
    curl = curl_easy_init();
    if (curl){
         /* First set the URL that is about to receive our POST. This URL can
       be an https:// URL if that is what should receive the data. */
    curl_easy_setopt(curl, CURLOPT_URL, "ntfy.sh/mesto_meso");
    /* Now specify the POST data */
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "A real message comig from the  c model of the POST notification");
 
    /* Perform the request, result gets the return code */
    result = curl_easy_perform(curl);
    /* Check for errors */
    if(result != CURLE_OK)
      fprintf(stderr, "curl_easy_perform() failed: %s\n",
              curl_easy_strerror(result));
 
    /* always cleanup */
    curl_easy_cleanup(curl);
    }

} 