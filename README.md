[![Contributor Covenant](https://img.shields.io/badge/Contributor%20Covenant-2.1-4baaaa.svg)](CODE_OF_CONDUCT.md)

# Pico Blink - Kickstart your Pico project using Clion

> Copyright © 2024, Greg PFISTER. Fair Core License, Version 1.0, MIT Future License

## About

This is a blink project that aim at been a kickstart for Pico projects.

## SDK installation

The SDK will be stored with the following structure:

```
/opt/rpi-pico
└── <VERSION vX.Y.Z>
    ├── pico-examples
    ├── pico-extras
    ├── pico-playground
    └── pico-sdk
```

Following instruction install the Pico SDK v2.0.0 on Mac:

1. First create a folder on `/opt`:

```shell
sudo mkdir /opt/rpi-pico
sudo chown $USER:staff /opt/rpi-pico # Adjust group to you machine
mdkir /opt/rpi-pico/v2.0.0
```

2. Now clone the Pico SDK:

```shell
cd /opt/rpi-pico/v2.0.0
git clone --recursive https://github.com/raspberrypi/pico-sdk.git -b 2.0.0
git clone --recursive https://github.com/raspberrypi/pico-extras.git -b sdk-2.0.0
git clone --recursive https://github.com/raspberrypi/pico-examples.git -b sdk-2.0.0
git clone --recursive https://github.com/raspberrypi/pico-playground.git -b sdk-2.0.0
```

## Clone and adjust the kickstarter repo

First clone this repo in your favorite development folder, remove git:

```shell
cd ~/Development
git clone https://github.com/gp-pico/gp-pico-blink.git
mv gp-pico-blink my-project
cd my-project
rm -rf .git
```

Then, rename all instances of `gp-pico-blink` to `my-project`, as well as all
instances of `blink` to `my-executable`:

At that point, you may want to adjust LICENSE.md, README.md, ...

```shell
git init
git add .
git commit -m "First commit"
```

## Clion setup

## CI/CD support

### Dev container

### Github actions

## Contribution

Contributions are welcome. Please refer to the [code of conduct](./CODE_OF_CONDUCT.md).

## Licenses

This project is provided under the Fair Core License, and each commit will be
transfered to MIT License after two years have passed.

For more details, please read the [license](./LICENSE.md) terms.
