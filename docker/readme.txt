# build container from image
docker build -t kochan .

# run container on interactive mode using files from specified volume
docker run -it -v path-to-files/Kochan-ProgrammingInC:/home/Kochan-ProgrammingInC --name "kochan" kochan