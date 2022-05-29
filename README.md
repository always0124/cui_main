# cui_main
个人主仓库

1.安装re2c需要先：yum -y install autoconf automake libtool

2.安装re2c，因为ninja依赖re2c
git clone https://github.com/skvadrik/re2c
cd re2c
./autogen.sh
./configure --prefix=/usr && make
make install
re2c -v

3.安装ninja，因为blade依赖ninja
git clone https://github.com/ninja-build/ninja.git
cd ninja
./configure.py --bootstrap
cp ninja /usr/bin/

4.安装blade
git clone https://github.com/chen3feng/blade-build.git
./install
ln -s blade /usr/bin

5. 针对centos8安装如下：
dnf config-manager --enable PowerTools
dnf install libstdc++-static
dnf install glibc-static
