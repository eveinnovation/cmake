#include <stdio.h>
#include "remux.h"
#include <libavutil/timestamp.h>
#include <libavformat/avformat.h>


void encoding(char output_file) {
	  printf("Encoding");

}

int decoding(char *input_file, AVFormatContext *input_format_context,  int ret) {
 printf("decoding");
   if ((ret = avformat_open_input(&input_format_context, input_file, NULL, NULL)) < 0) {
     fprintf(stderr, "Could not open input file '%s'", input_file);
     goto end;
   }
end:
   return 0;
}

void streaming() {
	 printf("streaming");
}

