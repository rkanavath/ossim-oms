#!/bin/bash
if [ -z "$GROOVY_HOME" ]; then
   echo "HOME Location: ${HOME}"
   source "$HOME/.sdkman/bin/sdkman-init.sh"
   if [ ! -z "$GROOVY_VERSION" ]; then
      sdk use groovy $GROOVY_VERSION
   fi
fi

if [ -z "$OSSIM_INSTALL_PREFIX" ]; then
   export OSSIM_INSTALL_PREFIX=$OSSIM_BUILD_DIR
fi

ant clean install mvn-install
gcc -shared -Wall swig/oms_wrap.o -o libjoms.so -L$OSSIM_BUILD_DIR/lib -lossim -loms
