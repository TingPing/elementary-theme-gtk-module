project('elementary-theme-gtk-module', 'c',
  version: '0.1',
  default_options: [
    'warning_level=2',
    'c_std=gnu11',
  ]
)

shared_module('elementary-theme-gtk-module',
  'elementary_theme_gtk_module.c',
  dependencies: dependency('gtk+-3.0'),
  install: true,
  install_dir: join_paths(get_option('libdir'), 'gtk-3.0', 'modules')
)
