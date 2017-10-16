{
  "targets": [
    {
      "include_dirs" : [
        "<!(node -e \"require('nan')\")"
      ],
      "target_name": "AD2",
      "sources": [ "AD2.cc" ]
    }
  ]
}