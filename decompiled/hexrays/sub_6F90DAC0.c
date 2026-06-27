unsigned int __usercall sub_6F90DAC0@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  int v2; // ecx@1
  unsigned int v3; // edi@1
  int v4; // ebx@2
  _DWORD *v5; // esi@2
  unsigned int result; // eax@3
  unsigned __int8 v7; // di@14
  unsigned __int8 v8; // di@22
  unsigned __int8 v9; // [sp+7h] [bp-11h]@27

  v2 = *(_DWORD *)a1;
  v3 = *(_DWORD *)(a1 + 4) - *(_DWORD *)a1;
  if ( *(_DWORD *)(a1 + 4) == *(_DWORD *)a1 )
    return -2;
  v4 = *(_BYTE *)v2;
  v5 = (_DWORD *)a1;
  if ( (char)v4 >= 0 )
  {
    *(_DWORD *)a1 = v2 + 1;
    return (unsigned __int8)v4;
  }
  result = -1;
  if ( (unsigned __int8)v4 <= 0xC1u )
    return result;
  if ( (unsigned __int8)v4 <= 0xDFu )
  {
    if ( v3 != 1 )
    {
      if ( (*(_BYTE *)(v2 + 1) & 0xC0) == -128 )
      {
        result = (v4 << 6) + *(_BYTE *)(v2 + 1) - 12416;
        if ( result <= a2 )
          *v5 = v2 + 2;
      }
      return result;
    }
    return -2;
  }
  if ( (unsigned __int8)v4 > 0xEFu )
  {
    if ( (unsigned __int8)v4 <= 0xF4u )
    {
      result = -2;
      if ( v3 > 3 )
      {
        v8 = *(_BYTE *)(v2 + 1);
        result = -1;
        if ( (*(_BYTE *)(v2 + 1) & 0xC0) == -128 && ((_BYTE)v4 != -16 || v8 > 0x8Fu) )
        {
          if ( (_BYTE)v4 != -12 || (result = -1, v8 <= 0x8Fu) )
          {
            v9 = *(_BYTE *)(v2 + 2);
            result = -1;
            if ( (v9 & 0xC0) == -128 && (*(_BYTE *)(v2 + 3) & 0xC0) == -128 )
            {
              result = (v9 << 6) + (v8 << 12) + (v4 << 18) + *(_BYTE *)(v2 + 3) - 63447168;
              if ( a2 >= result )
                *v5 = v2 + 4;
            }
          }
        }
      }
    }
  }
  else
  {
    result = -2;
    if ( v3 > 2 )
    {
      v7 = *(_BYTE *)(v2 + 1);
      result = -1;
      if ( (*(_BYTE *)(v2 + 1) & 0xC0) == -128 && ((_BYTE)v4 != -32 || v7 > 0x9Fu) )
      {
        result = -1;
        if ( (*(_BYTE *)(v2 + 2) & 0xC0) == -128 )
        {
          result = (v4 << 12) + (v7 << 6) + *(_BYTE *)(v2 + 2) - 925824;
          if ( a2 >= result )
            *v5 = v2 + 3;
        }
      }
    }
  }
  return result;
}
