int __usercall sub_6F8B3EC0@<eax>(unsigned int a1@<eax>)
{
  int result; // eax@1
  int v2; // edi@2
  volatile signed __int32 *v3; // ebx@2
  unsigned int v4; // ebp@4
  int v5; // esi@7
  bool v6; // cf@7
  bool v7; // zf@7
  signed int v8; // [sp+18h] [bp-24h]@4
  signed int v9; // [sp+1Ch] [bp-20h]@1

  result = sub_6F8B3E80(a1);
  v9 = 256;
  if ( result )
  {
    v2 = result;
    v3 = (volatile signed __int32 *)(result + 56);
    while ( 1 )
    {
      sub_6F8B35C0(v3);
      if ( !*(_DWORD *)(v2 + 40) )
        break;
      v8 = 0;
      v4 = 0;
      do
      {
        while ( !*(_BYTE *)(*(_DWORD *)(v2 + 48) + v4) )
        {
          if ( ++v4 >= *(_DWORD *)(v2 + 40) )
            goto LABEL_10;
        }
        v5 = *(_DWORD *)(*(_DWORD *)(v2 + 44) + 4 * v4);
        sub_6F8B6890((int *)&unk_6FB48AD8);
        v6 = *(_DWORD *)(dword_7037354C + 4 * v4) < 1u;
        v7 = *(_DWORD *)(dword_7037354C + 4 * v4) == 1;
        *(_DWORD *)(*(_DWORD *)(v2 + 44) + 4 * v4) = 0;
        *(_BYTE *)(*(_DWORD *)(v2 + 48) + v4) = 0;
        if ( !v6 && !v7 )
        {
          sub_6F8B3600(v3);
          (*(void (__cdecl **)(int))(dword_7037354C + 4 * v4))(v5);
          sub_6F8B35C0(v3);
          v8 = 1;
        }
        ++v4;
        sub_6F8B6B50((int *)&unk_6FB48AD8);
      }
      while ( v4 < *(_DWORD *)(v2 + 40) );
LABEL_10:
      sub_6F8B3600(v3);
      result = v8;
      if ( v8 )
      {
        if ( --v9 )
          continue;
      }
      return result;
    }
    result = sub_6F8B3600(v3);
  }
  return result;
}
