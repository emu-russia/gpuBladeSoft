int __cdecl sub_6F8A1130(int a1)
{
  int v1; // edx@2
  unsigned int v2; // ebx@3
  int v3; // ecx@4
  unsigned int v4; // eax@5
  int result; // eax@9

  if ( v6F680000 == 23117 )
  {
    if ( sub_6F8A1010(1869086720) )
    {
      v2 = a1 - 1869086720;
      v1 = v6F68003C + 1869086720 + *(_WORD *)(v6F68003C + 1869086740) + 24;
      if ( *(_WORD *)(v6F68003C + 1869086726) )
      {
        v3 = 0;
        while ( 1 )
        {
          v4 = *(_DWORD *)(v1 + 12);
          if ( v2 >= v4 && v2 < *(_DWORD *)(v1 + 8) + v4 )
            break;
          ++v3;
          v1 += 40;
          if ( v3 == *(_WORD *)(v6F68003C + 1869086726) )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        v1 = 0;
      }
    }
    result = v1;
  }
  else
  {
    result = 0;
  }
  return result;
}
