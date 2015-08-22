toybengine
----------

Tiny toy HTML renderer in C++ for learning purposes.

3rd party libs
----------

- FLTK

CSS subset
----------

Selectors:

1. element (div, span, etc.)
2. id (#el-container)
3. class (.some-class)

Currently no child selectors support.

Example containing all of supported features:
```css
div {
  display: none;
}

#idselector {
  background: #232323;
}

.class-selector {
	color: #232354;
}
```

