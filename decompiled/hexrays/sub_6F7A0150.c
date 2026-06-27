char *__cdecl sub_6F7A0150(int a1, int a2)
{
  int v2; // ebx@1
  _BYTE *v3; // esi@1
  char *result; // eax@1
  int v5; // edx@3
  int v6; // ecx@3
  int v7; // [sp+2Ch] [bp-20h]@1

  v2 = *(_WORD *)(a1 + 8);
  v3 = *(_BYTE **)(a1 + 16);
  result = sub_6F773B30(a2, 1, 0, v2 + 1, 0, &v7);
  if ( v7 )
  {
    result = 0;
  }
  else
  {
    if ( v2 )
    {
      v5 = *v3;
      v6 = 0;
      if ( *v3 )
      {
        do
        {
          if ( (unsigned int)(v5 - 32) > 0x5F )
            LOBYTE(v5) = 63;
          result[v6++] = v5;
          if ( v2 == v6 )
            break;
          v5 = v3[v6];
        }
        while ( v3[v6] );
      }
    }
    else
    {
      v6 = 0;
    }
    result[v6] = 0;
  }
  return result;
}
