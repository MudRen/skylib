(poke
  (pattern "<indirect:any-living> in the <string>")
  (pattern "<indirect:any-living>")
  (pattern "<string> <indirect:any-living>")
  (pattern "<indirect:any-living> [in] <string>")
  (targeted
    (no-arguments
      (self   "You poke $hcname$.")
      (target "$mcname$ pokes you.")
      (rest  "$mcname$ pokes $hcname$.")
    )
    (arguments
      (arguments eyes,ribs,legs,nose,ear,stomach,
                 chest like a miffed Deutha,#)
      (self   "You poke $hcname$ in the $arg$.")
      (target "$mcname$ pokes you in the $arg$.")
      (rest  "$mcname$ pokes $hcname$ in the $arg$.")
    )
  )
)

