int __usercall sub_6F896ED0@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  signed int v2; // eax@1
  signed int v3; // edx@2
  int v4; // esi@2
  _BYTE *v5; // eax@3
  int result; // eax@9
  int v7; // [sp+0h] [bp-1Ch]@6
  int v8; // [sp+4h] [bp-18h]@6

  v1 = a1;
  v2 = sub_6F896D30((_DWORD *)(a1 + 12));
  if ( v2 > 0 )
  {
    v3 = v2;
    v4 = *(_DWORD *)(v1 + 12);
    if ( v2 <= *(_DWORD *)(v1 + 4) - v4 )
    {
      v5 = (_BYTE *)(v4 + v2);
      *(_DWORD *)(v1 + 12) = v4 + v3;
      if ( *(_BYTE *)(v1 + 8) & 4 && *v5 == 36 )
        *(_DWORD *)(v1 + 12) = v5 + 1;
      v7 = *(_DWORD *)(v1 + 20);
      v8 = *(_DWORD *)(v1 + 24);
      if ( v3 <= 9 )
      {
        if ( v7 < v8 )
        {
          result = *(_DWORD *)(v1 + 16) + 16 * v7;
          *(_DWORD *)(result + 4) = 0;
          *(_DWORD *)(v1 + 20) = v7 + 1;
          if ( v4 )
            goto LABEL_10;
        }
      }
      else
      {
        if ( *(_DWORD *)v4 == 1330399071
          && *(_DWORD *)(v4 + 4) == 1598832962
          && (*(_BYTE *)(v4 + 8) == 95 || *(_BYTE *)(v4 + 8) == 46 || *(_BYTE *)(v4 + 8) == 36)
          && *(_BYTE *)(v4 + 9) == 78 )
        {
          *(_DWORD *)(v1 + 44) = *(_DWORD *)(v1 + 44) + 22 - v3;
          if ( v7 < v8 )
          {
            result = *(_DWORD *)(v1 + 16) + 16 * v7;
            *(_DWORD *)(v1 + 20) = v7 + 1;
            *(_DWORD *)(result + 4) = 0;
            *(_DWORD *)result = 0;
            *(_DWORD *)(result + 8) = "(anonymous namespace)";
            *(_DWORD *)(result + 12) = 21;
            goto LABEL_11;
          }
          goto LABEL_14;
        }
        if ( v7 < v8 )
        {
          result = *(_DWORD *)(v1 + 16) + 16 * v7;
          *(_DWORD *)(result + 4) = 0;
          *(_DWORD *)(v1 + 20) = v7 + 1;
LABEL_10:
          *(_DWORD *)(result + 4) = 0;
          *(_DWORD *)result = 0;
          *(_DWORD *)(result + 8) = v4;
          *(_DWORD *)(result + 12) = v3;
LABEL_11:
          *(_DWORD *)(v1 + 40) = result;
          return result;
        }
      }
    }
LABEL_14:
    result = 0;
    goto LABEL_11;
  }
  return 0;
}
