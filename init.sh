LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/opt/ffmpeg/lib/:/opt/ffmpeg/lib64/
DIR=build && \
rm -rf ${DIR}; \
mkdir -p ${DIR}; \
cd ${DIR} && cmake .. && cmake --build . && cd ..; \
./build/bin/stream small_bunny_1080p_60fps.mp4 small_bunny_1080p_60fps.ts 
