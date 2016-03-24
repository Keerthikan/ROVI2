#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/image_pipeline/camera_calibration"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/install/lib/python2.7/dist-packages:/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build" \
    "/usr/bin/python" \
    "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/image_pipeline/camera_calibration/setup.py" \
    build --build-base "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/image_pipeline/camera_calibration" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/install" --install-scripts="/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/install/bin"
