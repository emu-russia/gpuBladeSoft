int sub_6F8B3B40()
{
  int v0; // ebx@1
  unsigned int v1; // eax@2
  void *v3; // eax@8
  unsigned int v4; // eax@9
  void *v5; // ST00_4@11

  sub_6F8B2F50((volatile signed __int32 *)&unk_6FB48AD4);
  v0 = dword_70373574;
  if ( dword_70373574 )
  {
    v1 = sub_6F8B3770(dword_70373574);
    *(_DWORD *)(v0 + 180) = v1;
    if ( v1 )
    {
      dword_70373574 = *(_DWORD *)(v0 + 176);
      if ( !dword_70373574 )
        dword_70373570 = 0;
      *(_DWORD *)(v0 + 176) = 0;
    }
    else
    {
      v0 = 0;
    }
  }
  else
  {
    v3 = calloc(1u, 0xB8u);
    v0 = (int)v3;
    if ( v3 )
    {
      v4 = sub_6F8B3770((int)v3);
      if ( v4 )
      {
        *(_DWORD *)(v0 + 180) = v4;
      }
      else
      {
        v5 = (void *)v0;
        v0 = 0;
        free(v5);
      }
    }
  }
  sub_6F8B3270((volatile signed __int32 *)&unk_6FB48AD4);
  return v0;
}
