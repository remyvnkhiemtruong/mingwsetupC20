{+ AutoGen5 template  -*- nroff -*-

## ---------------------------------------------------------------------
## aginfo3.tpl -- Template for function texi doc
##
## Time-stamp:      "2010-02-24 08:41:29 bkorb"
## Author:          Bruce Korb <bkorb@gnu.org>
##              by: bkorb
##
##  This file is part of AutoOpts, a companion to AutoGen.
##  AutoOpts is free software.
##  AutoOpts is Copyright (c) 1992-2010 by Bruce Korb - all rights reserved
##
##  AutoOpts is available under any one of two licenses.  The license
##  in use must be one of these two and the choice is under the control
##  of the user of the license.
##
##   The GNU Lesser General Public License, version 3 or later
##      See the files "COPYING.lgplv3" and "COPYING.gplv3"
##
##   The Modified Berkeley Software Distribution License
##      See the file "COPYING.mbsd"
##
##  These files have the following md5sums:
##
##  43b91e8ca915626ed3818ffb1b71248b pkg/libopts/COPYING.gplv3
##  06a1a2e4760c90ea5e1dad8dfaac4d39 pkg/libopts/COPYING.lgplv3
##  66a5cedaf62c4b2637025f049f9b826f pkg/libopts/COPYING.mbsd
##
## ---------------------------------------------------------------------
## $Id$
## ---------------------------------------------------------------------

texi

(setenv "SHELL" "/bin/sh")

+}{+

(out-push-new (sprintf "%s.menu" (base-name)))
(define lib-name (get "library"))
(if (< (string-length lib-name) 1)
    (set! lib-name (base-name)) )
(define node-name (sprintf "lib%s procedures" lib-name))
(define sec-name  (sprintf "lib%s External Procedures" lib-name))

(define doc-level (getenv "LEVEL"))
(if (not (string? doc-level))
    (set! doc-level "section"))
(sprintf "* %-28s %s\n" (string-append node-name "::") sec-name)  +}{+
(out-pop)
+}@node {+ (. node-name) +}
@{+ (. doc-level) +} {+ (. sec-name) +}

{+

IF (not (exist? "lib-description"))

+}These are the publicly exported procedures from the lib@i{{+(. lib-name)+}}
library.  Any other functions mentioned in the @i{header} file are
for the private use of the library.{+

ELSE  +}{+  lib-description +}{+
ENDIF +}

@menu{+

FOR export_func               +}{+
  IF (not (exist? "private")) +}
* lib{+(sprintf "%-24s" (string-append
       lib-name "-" (get "name") "::"))
    +} {+name      +}{+

  ENDIF private    +}{+

ENDFOR export_func +}
@end menu

This {+(. doc-level)+} was automatically generated by AutoGen
using extracted information and the {+(tpl-file)+} template.{+

FOR export_func                +}{+
  IF (not (exist? "private"))

+}

@node lib{+library+}-{+name+}
@{+CASE (. doc-level)+}{+
   = chapter    +}{+
   = section    +}sub{+
   = subsection +}subsub{+
   ESAC +}section {+name+}
@findex {+name+}

{+what+}

@noindent
Usage:
@example
{+ % ret-type "%s res = "
+}{+name+}({+
  IF (exist? "arg") +} {+
    FOR arg ", " +}{+arg-name+}{+
    ENDFOR +} {+
  ENDIF +});
@end example{+
  IF (or (exist? "arg") (exist? "ret-type")) +}
@noindent
Where the arguments are:
@multitable @columnfractions .05 .15 .20 .55
@item @tab Name @tab Type @tab Description
@item @tab ----- @tab ----- @tab -------------{+
    FOR arg "\n" +}
@item @tab {+arg-name+} @tab @code{{+arg-type+}}
@tab {+arg-desc+}{+
    ENDFOR+}{+
    IF (exist? "ret-type") +}
@item @tab returns @tab {+ret-type+}
@tab {+ ret-desc +}{+

    ENDIF +}
@end multitable{+

  ENDIF
+}

{+doc+}
{+ % err "\n%s\n" +}{+

  ENDIF private  +}{+

ENDFOR  export_func


+}
