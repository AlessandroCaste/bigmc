BigMC (Bigraphical Model Checker) is a model-checker designed to operate on Bigraphical Reactive Systems (BRS). BRS is a formalism developed by Robin Milner and colleagues that emphasises the orthogonal notions of locality and connectivity. Bigraphs have found applications in ubiquitous computing, computational biology, business workflow modelling, and context-aware systems.

By model checking, we mean precisely the act of checking whether some specification is true of a particular bigraphical model. This is achieved through a kind of exhaustive search of all the possible states of the system. For arbitrary models, this kind of checking is computationally intractable, as the state space is simply too huge (and indeed infinite in many cases). The challenge of this kind of task is to limit the kinds of models we check to some tractable subset, and to reduce the number of actual states that we need to check directly in order to provide concrete correctness guarantees.


### Dependencies

There are quite a few dependencies you must be sure to install.  
This guide does not cover standard Windows installation since bigmc extension was tested (and partially developed) on WSL: check it out!

Installation has been tested on Ubuntu 19.10 and some libs may already be present on your system

```
sudo apt-get install autoconf
sudo apt-get install libtool
sudo apt-get install google-perftools
sudo apt-get install flex bison
sudo apt-get install libreadline-dev
sudo apt-get install texinfo
sudo apt-get install g++ 
```

## Installation

Now, to the actual installation:

```
git clone
cd bigmc
./autogen.sh
./configure
make
sudo make install
```
Finally, let's export!

```
export PATH=/usr/local/bigmc/bin:$PATH
export BIGMC_HOME=/usr/local/bigmc
```

And we're done :)
You can run bigmc by typing <code>bigmc</code> in your terminal.
