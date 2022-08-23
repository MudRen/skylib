(charm
  (pattern "<indirect:any-living>")
  (pattern "<indirect:any-living> <string>")
  (pattern "<string> <indirect:any-living>")
  (targeted
    (no-arguments
      (self   "You charm $hcname$.")
      (target "$mcname$ charms you.")
      (rest  "$mcname$ charms $hcname$.")
    )
    (arguments
      (arguments  gently,strangely,firmly,seductively,suggestively,
                  quickly,excitedly,with a log fire,over a nice dinner,
                  slightly,sensually,reluctantly,politely,lovingly,
                  backwards,into space,using a coffee table,
                  vigorously,eagerly,vivaciously,like pinkfish)
      (self   "You charm $hcname$ $arg$.")
      (target "$mcname$ charms you $arg$.")
      (rest  "$mcname$ charms $hcname$ $arg$.")
    )
    (arguments
      (arguments the pants off,the towel off)
      (self   "You charm $arg$ $hcname$.")
      (target "$mcname$ charms $arg$ $hcname$.")
      (rest   "$mcname$ charms $arg$ $hcname$.")
    )
  )
)

