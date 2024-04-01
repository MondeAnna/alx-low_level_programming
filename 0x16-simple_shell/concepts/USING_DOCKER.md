### What is Docker?

Docker is a containerization platform that allows you to package your code and dependencies into isolated containers.

<br />

#### What are containers?

Containers are lightweight, standalone, executable packages of software that include everything needed to run an application: `code`, `runtime`, `system tools`, `system libraries`, and `settings`.

<br />

#### How do Docker containers work?

When you run a Docker container, Docker creates a lightweight virtual machine that runs your application. The virtual machine is isolated from the host machine (regardless of the type of operating system you use) and from other containers, so each container has its own filesystem, network, and process space.

<br />

#### What are the benefits of using Docker?

* Docker containers offer many benefits, including:

	* __Portability__: Docker containers can be run on any machine with Docker installed, making them easy to deploy and share.

	* __Reproducibility__: Docker containers are reproducible, meaning you can create the exact same environment on any machine. This helps debug and test your code.

	* __Isolation__: Docker containers isolate your applications from each other and the host machine, helping to prevent conflicts and security vulnerabilities.

	* __Efficiency__: Docker containers are lightweight and efficient, taking up less space and resources than traditional virtual machines.

	* __Scalability__: Docker containers are scalable, making it easy to add or remove containers as needed.

<br />

#### What is Docker used for?

* There are many ways to use Docker, but some of the most common tasks include:

	* __Building Docker images__: A Docker image is a blueprint for a Docker container. You can build a Docker image from a Dockerfile, which is a text file that describes the contents of the image.

	* __Running Docker containers__: Once you have built a Docker image, you can run it as a Docker container. To do this, you use the `docker run` command.

	* __Managing Docker containers__: Once you have run a Docker container, you can manage it using the `docker ps`, `docker stop`, and `docker start` commands.

	* __Networking Docker containers__: Docker containers can communicate with each other using Docker networks. You can create a Docker network using the `docker network create` command.

	* __Storing Docker images__: Docker images can be stored in Docker registries. You can push and pull Docker images from Docker registries using the `docker push` and `docker pull` commands.

<br />

#### Setting up a development environment in Docker

Your development environment is the hardware and software you use to write code. As a developer, it is usually your responsibility to set up your environment based on the work you will be doing at your new job. As tasks change, you’ll often need to update or reconfigure your environment for new software, packages, or versions.

Please follow the appropriate guide (PC, Mac, or Linux) to set up your development environment on your operating system.

We’re always here to help, but it is your responsibility to configure your development machine.

In order to be successful in this program, your computer needs to be set up in a very specific way. If the setup is correct, you will not waste your time fighting the set up of tools and applications, so you can concentrate on the new material you are learning.

First, head to the guide for your particular operating system. This will give you an overview of anything in particular you should be aware of for your system.

<br />

#### Understanding important concepts about Docker

	* __Docker images__: A Docker image is a lightweight, standalone, executable package of software that includes everything needed to run an application: `code`, `runtime`, `system tools`, `system libraries`, and `settings`.

	* __Docker containers__: A Docker container is a runnable instance of a Docker image. It includes the application code and all of its dependencies, but it runs isolated from other containers on the same host.

	* __Dockerfile__: A Dockerfile is a text file that contains the instructions for building a custom Docker image. It tells Docker what software to install, what configuration settings to use, and so on.

	* __Docker Hub__: Docker Hub is a public registry of Docker images. It allows you to find and share images with other users.

	* __Docker Compose__: Docker Compose is a tool that allows you to define and run multi-container Docker applications. It makes it easy to manage complex applications that require multiple containers.

<br />

#### Important Docker Commands

	* `docker pull` - This command is used to pull a Docker ubuntu image from a registry.

	* `docker run` - creates and starts a Docker container from an image

	* `docker start` - is used for containers that have been previously created but are currently stopped. If you want to create and start a new container in a single step, you can use the docker run command.

	* `docker exec` - runs a command in a running Docker container.

	* `docker stop` - stops a running Docker container.

	* `docker ps -a` - This command is used to list all of the Docker containers, including those that are not running.

	* `docker kill` - This command is used to forcefully stop a Docker container.

	* `docker rm` - This command is used to remove a Docker container.

	* `docker images` - This command is used to list all of the Docker images that are stored on your machine.

	* `docker search` - This command is used to search for Docker images in a registry.

	* `docker inspect` - This command is used to get detailed information about a Docker container or image.

	* `docker logs` - This command is used to view the logs for a Docker container.

	* `docker commit` - This command is used to create a new Docker image from an existing container.

	* `docker push` - This command is used to push a Docker image to a registry.

	* `docker tag` - This command is used to tag a Docker image with a new name or identifier.

	* `docker build` - This command is used to build a Docker image from a Dockerfile.

	* `docker compose` - This command is used to run a Docker application that is defined in a Docker Compose file.

<br />

#### Building Ubuntu 20.04 Docker Image for alx projects

* First-Time Setup

	* docker pull ubuntu:20.04` - Pull the ubuntu 20.04 image from docker hub

	* docker run -it --name my-ubuntu-container ubuntu:20.04` - This command is used to run a Docker ubuntu 20.04 container.

* How to Use the Container Again

	* docker start my-ubuntu-container` - starting the container named my-ubuntu-container" that was created from the Ubuntu 20.04 image.

	* docker exec -it my-ubuntu-container /bin/bash` - executes the /bin/bash command inside the my-ubuntu-container container in interactive mode.

	* docker stop my-ubuntu-container` - When you are done and want to stop the "my-ubuntu-container" container, use the following command.

<br />

#### Extra Resources

* _[Why Do So Many Software Engineers Use Linux?](https://www.youtube.com/watch?v=otDOHt_Jges)_

* _[Learn Docker to the next level](https://www.simplilearn.com/tutorials/docker-tutorial/getting-started-with-docker)_

* _[Docker tutorial doc](https://docker-curriculum.com/)_

<br />
