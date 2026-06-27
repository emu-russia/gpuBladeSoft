signed int __usercall sub_6F791920@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  int v2; // ebx@2
  int v3; // eax@2
  int v4; // edi@2
  const char *v5; // esi@2
  int v6; // ebp@3
  signed int v7; // ebx@3
  const char *v8; // eax@5
  signed int result; // eax@8

  if ( a2 > 0xFF )
  {
    result = -1;
  }
  else
  {
    v2 = a1;
    v3 = (*(int (__cdecl **)(_DWORD))(*(_DWORD *)(a1 + 1348) + 20))(*(_WORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 1348) + 24)
                                                                             + 2 * a2));
    v4 = *(_DWORD *)(v2 + 1352);
    v5 = (const char *)v3;
    if ( v4 )
    {
      v6 = *(_DWORD *)(v2 + 1356);
      v7 = 0;
      while ( 1 )
      {
        v8 = *(const char **)(v6 + 4 * v7);
        if ( v8 )
        {
          if ( *v8 == *v5 && !strcmp(v8, v5) )
            break;
        }
        if ( ++v7 == v4 )
          goto LABEL_9;
      }
      result = v7;
    }
    else
    {
LABEL_9:
      result = -1;
    }
  }
  return result;
}
