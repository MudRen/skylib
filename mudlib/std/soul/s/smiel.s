(smiel
  (pattern "[at] <indirect:any-living>")
  (pattern "<string>")
  (pattern "<string> [at] <indirect:any-living>")
  (pattern "[at] <indirect:any-living> <string>")
  (single
    (no-arguments
      (self "You smiel like an idiot that can't type smile.")
      (rest "$mcname$ smiels like an idiot that can't type smile.")
    )
    (arguments
      (arguments
       happily, sadly, nervously, wryly, broadly, crookedly, stupidly,
       idiotically, condescendingly, ironically, patiently, brightly,
       slightly, nastily, excitedly, strangely, with forced patience,
       plasticly, carefully, sadistically, lopsidedly, fishily, cattishly,
       faintly, like a train, angrily, paranoically, innocently, froggily,
       slyly, weakly, humbly, paradoxically, sarcastically, viciously, 
       garishly, sweetly, innocently, lovingly, dreamily, radiantly,
       enthusiastically, insolently, quirkily, completely, unconsciously,
       drunkenly, insanely, cutely, maliciously, smugly, absentmindedly,
       curtly, disturbingly, unbelievably, quietly, loudly, differently,
       winningly, in triumph, seductively, tightly, smugly,
       gosh there are lots of arguments, softly, lividly, demonically,
       warmly, grimly, indolently, ingeniously, wickedly, contentedly,
       statistically, spasmodically, incandescently, pleasantly,
       with menace, manically, warily, sardonically, lazily, serenely,
       disappointedly, coyly, spazmodically, sheepishly, enigmatically,
       friperally, wryly, hopefully, knowingly, politely, kindly,
      coffee table like, shyly)
      (self "You smiel $arg$ like an idiot that can't type smile.")
      (rest "$mcname$ smiels $arg$ like an idiot that can't type smile.")
    )
  )
  (targeted
    (no-arguments
      (self   "You smiel like an idiot that can't type smile at $hcname$.")
      (target "$mcname$ smiels like an idiot that can't type smile at you.")
      (rest  "$mcname$ smiels like and idiot that can't type smile at $hcname$.")
    )
    (arguments
      (arguments happily, sadly, nervously, wryly, broadly, crookedly,
                 stupidly, idiotically, condescendingly, ironically,
                 patiently, brightly, slightly, nastily, excitedly,
                 strangely, with forced patience, plasticly, carefully,
                 sadistically, lopsidedly, fishily, catishly, faintly,
                 like a train, angrily, paranoically, innocently, froggily,
                 slyly, weakly, humbly, paradoxically, sarcastically,
                 viciously, garishly, sweetly, innocently, lovingly,
                 dreamily, radiantly, enthusiastically, insolently,
                 quirkily, completely, unconsciously, drunkenly, insanely,
                 cutely, maliciously, smugly, absentmindedly, curtly,
                 disturbingly, unbelievably, quietly, loudly, differently,
                 winningly, in triumph, seductively, tightly, smugly,
                 gosh there are lots of arguments, softly, lividly,
                 demonically, warmly, grimly, indolently, ingeniously,
                 wickedly, contentedly, statistically, spasmodically,
                 incandescently, pleasantly, with menace, manically,
                 warily, sardonically, lazily, serenely, disappointedly,
                 coyly, spazmodically, sheepishly, enigmatically,
                 friperally, wryly, hopefully, knowingly, politely,
                   kindly, coffee table like, shyly)
      (self   "You smiel $arg$ like an idiot that can't type smile at $hcname$.")
      (target "$mcname$ smiels $arg$ like an idiot that can't type smile at you.")
      (rest  "$mcname$ smiels $arg$ like an idiot that can't type smile at $hcname$.")
    )
  )
)
