#include <libavutil/timestamp.h>
#include <libavformat/avformat.h>

void encoding(char output_file);

int decoding(char *input_file, AVFormatContext *input_format_context,  int ret);

void streaming();

