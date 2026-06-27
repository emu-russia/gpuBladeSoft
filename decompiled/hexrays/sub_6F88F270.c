signed int __cdecl sub_6F88F270(int a1)
{
  int v1; // esi@2
  int v2; // eax@5
  int v3; // eax@5
  unsigned int v4; // eax@8

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 28);
    if ( v1 )
    {
      if ( *(_DWORD *)(a1 + 32) && *(_DWORD *)(a1 + 36) )
      {
        v2 = *(_DWORD *)(v1 + 8);
        *(_DWORD *)(a1 + 20) = 0;
        *(_DWORD *)(a1 + 8) = 0;
        *(_DWORD *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 44) = 2;
        *(_DWORD *)(v1 + 16) = v2;
        v3 = *(_DWORD *)(v1 + 24);
        *(_DWORD *)(v1 + 20) = 0;
        if ( v3 < 0 )
        {
          v3 = -v3;
          *(_DWORD *)(v1 + 24) = v3;
        }
        else if ( !v3 )
        {
          *(_DWORD *)(v1 + 4) = 113;
          goto LABEL_8;
        }
        *(_DWORD *)(v1 + 4) = 42;
        if ( v3 == 2 )
        {
          v4 = sub_6F88BF50(0, 0, 0);
          goto LABEL_9;
        }
LABEL_8:
        v4 = sub_6F88BA20(0, 0, 0);
LABEL_9:
        *(_DWORD *)(a1 + 48) = v4;
        *(_DWORD *)(v1 + 40) = 0;
        sub_6F8920F0(v1);
        return 0;
      }
    }
  }
  return -2;
}
