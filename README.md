vim
-------------------------------------------------------------------------------------------------------
set nocompatible                " choose no compatibility with legacy vi
set number
syntax enable
set encoding=utf-8
set showcmd                     " display incomplete commands
filetype plugin indent on       " load file type plugins + indentation

"" Whitespace
set nowrap                      " don't wrap lines
"set tabstop=2 shiftwidth=2      " a tab is two spaces (or set this to 4)
set expandtab                   " use spaces, not tabs (optional)
set backspace=indent,eol,start  " backspace through everything in insert mode

"" Searching
set hlsearch                    " highlight matches
set incsearch                   " incremental searching
set ignorecase                  " searches are case insensitive...
set smartcase                   " ... unless they contain at least one capital letter
set autoindent
set cindent
set expandtab
set shiftwidth=4 softtabstop=4
set noswapfile
colorscheme delek
-------------------------------------------------------------------------------------------------------
Configure Visual Studio Code for CMake with some options
cmake.options
https://stackoverflow.com/questions/42423536/configure-visual-studio-code-for-cmake-with-some-options
--------------------------------------------------------------------------------------------------------
