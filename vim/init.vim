" 保存时立即load新配置
" autocmd BufWritePost $MYVIMRC source $MYVIMRC

" 关闭兼容模式, 实际上已经没什么用了，因为默认就是关闭
set nocompatible

" tab映射
set tabstop=4 shiftwidth=4 softtabstop=4 expandtab

set nobk ai cin nu
set fileencodings=ucs-bom,utf-8,utf-16,gbk,big5,gb18030,latin1
set encoding=utf-8
set backspace=indent,eol,start

" 禁用鼠标
set mouse=

" 插件列表
call plug#begin('~/.vim/plugged')
" 一些默认的优化
Plug 'tpope/vim-sensible'
" 行末空格显示以及优化
Plug 'bronson/vim-trailing-whitespace'
" 两种配色方案
Plug 'altercation/vim-colors-solarized'
Plug 'tomasr/molokai'
" 强化状态栏
Plug 'Lokaltog/vim-powerline'
" c++ 语法高亮增强
Plug 'octol/vim-cpp-enhanced-highlight'
" 语法检查
Plug 'vim-syntastic/syntastic'
" Vim 集成 Git
Plug 'tpope/vim-fugitive'
" 代码提示工具
Plug 'ycm-core/YouCompleteMe'
" 文件树
Plug 'preservim/nerdtree'
" Vim/Tmux集成
Plug 'christoomey/vim-tmux-navigator'
call plug#end()

" 禁止折行
set nowrap

" 关闭错误提示音
set vb t_vb=
autocmd GUIEnter * set visualbell t_vb=

" 配色方案
set background=light
colorscheme molokai

" vim内置语法高亮
syntax enable

" 字体
set guifont=Consolas:h14
" set guifontwide=Microsoft\ Yahei\ Mono:h14

" 状态栏风格
let g:Powerline_colorscheme='solarized256'
let g:Powerline_background='light'

" 禁止显示菜单栏，工具栏和滚动条，仅GUI模式有效
" set guioptions-=m
" set guioptions-=T
" set guioptions-=l
" set guioptions-=L
" set guioptions-=r
" set guioptions-=R

" 禁止光标闪烁
set gcr=a:block-blinkon0

" 总是显示状态栏
set laststatus=2

" 状态栏显示光标位置
set ruler

" 高亮当前行/列
set cursorline
set cursorcolumn

" 高亮搜索结果（已默认包含在vim-sensible中）
" set hlsearch
" 实时搜索（已默认包含在vim-sensible中）
" set incsearch
" 搜索时忽略大小写
set ignorecase
" 启用智能大小写搜索（当搜索字符串包含大写字母时，不忽略大小写)
set smartcase

" 设置快捷键前缀为';'
let mapleader=";"

" 删除行末空格快捷键';qw'
map <leader>qw :FixWhitespace<cr>
" 保存时删除行末空格
" autocmd BufWritePre * :FixWhitespace

" 不使用默认寄存器
noremap yy "xyy
noremap dd "xdd
noremap p "xp
noremap y "xy
noremap d "xd
noremap x "xx

" 删除不必要的快捷键
map <C-A> <Nop>
map <C-X> <Nop>


" 菜单自动补全
set completeopt=menu,menuone,noselect

" YCM相关配置
let g:ycm_python_interpreter_path = '/usr/local/bin/python3'

nnoremap <F1> :YcmCompleter GoToDeclaration<CR>
nnoremap <F2> :YcmCompleter GoToDefinition<CR>
nnoremap <F3> :YcmCompleter GoToReferences<CR>

" 状态栏显示 Syntastic 状态
set statusline+=%#warningmsg#
set statusline+=%{SyntasticStatuslineFlag()}
set statusline+=%*

" 错误列表行为
let g:syntastic_always_populate_loc_list = 1
let g:syntastic_auto_loc_list = 1
let g:syntastic_check_on_open = 1
let g:syntastic_check_on_wq = 0
let g:syntastic_python_checkers=['flake8']
let g:syntastic_python_flake8_args='--max-line-length=120 --ignore=E402,E501,E302,E305,W391,E266'

" NERDTree
nnoremap <F4> :NERDTreeToggle<CR>

