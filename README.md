# QT setup for Bazel

This repository contains a simple Qt5 Hello World application with that is
built with [http://bazel.io/](Bazel).

The Bazel setup has been tested on an Arch Linux system with Qt5 installed. It
should work on other OSes, possibly with changes to the WORKSPACE file and the
qt.bzl file that adjust the paths in them.

# History

I wanted to figure out how to build a Qt application with Bazel, but I could not find any examples online and it was very difficult to add into my existing application. So I created this simple example to figure out how to get a build working, and then figured that other people might want to build their Qt apps with Bazel, so I posted it so that others didn't have to spend as much time figuring this out. This example, though minimal, I think satisfies the use case of "how do I get Bazel to build a Qt app?".

This repository, out of the box, does not necessarily work on all platforms, or with all the different Qt libraries, but making those changes should be easy. However, I do not have time to ensure that this example works on all different combinations of platforms and libraries, so my suggestion is to copy the relevant files into your repository and modify them as needed. Pull requests are unlikely to be accepted, so on the plus side, it's unlikely that you would need to merge in changes from this repository at any point.
