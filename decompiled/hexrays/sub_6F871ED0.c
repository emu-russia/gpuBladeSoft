int __cdecl sub_6F871ED0(int a1)
{
  int result; // eax@1
  unsigned int v2; // edx@1
  int v3; // ecx@3
  int v4; // eax@7
  int v5; // esi@14
  signed int v6; // esi@14
  int v7; // ecx@14
  int v8; // edx@14
  int v9; // edx@18
  int v10; // ST1C_4@18
  signed int v11; // edx@33

  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 28);
  *(_DWORD *)(a1 + 436) = result;
  *(_DWORD *)result = sub_6F871E8C;
  v2 = *(_DWORD *)(a1 + 40);
  if ( v2 <= 5 )
  {
    switch ( v2 )
    {
      default:
        goto LABEL_2;
      case 4u:
      case 5u:
        if ( *(_DWORD *)(a1 + 36) != 4 )
          break;
        goto LABEL_3;
      case 2u:
      case 3u:
        if ( *(_DWORD *)(a1 + 36) == 3 )
          goto LABEL_3;
        break;
      case 1u:
        if ( *(_DWORD *)(a1 + 36) == 1 )
          goto LABEL_3;
        break;
    }
  }
  else
  {
LABEL_2:
    if ( *(_DWORD *)(a1 + 36) > 0 )
    {
LABEL_3:
      v3 = *(_DWORD *)(a1 + 44);
      if ( v3 != 2 )
        goto LABEL_4;
LABEL_19:
      *(_DWORD *)(a1 + 100) = 3;
      if ( v2 == 3 )
      {
        *(_DWORD *)(result + 4) = sub_6F871A5C;
        result = sub_6F871964(a1);
      }
      else if ( v2 == 1 )
      {
        *(_DWORD *)(result + 4) = sub_6F871D0C;
      }
      else
      {
        if ( v2 != 2 )
          goto LABEL_7;
        *(_DWORD *)(result + 4) = sub_6F871C08;
      }
      goto LABEL_8;
    }
  }
  v9 = *(_DWORD *)a1;
  *(_DWORD *)(v9 + 20) = 11;
  v10 = result;
  (*(void (__cdecl **)(int))v9)(a1);
  v2 = *(_DWORD *)(a1 + 40);
  result = v10;
  v3 = *(_DWORD *)(a1 + 44);
  if ( v3 == 2 )
    goto LABEL_19;
LABEL_4:
  if ( v3 == 4 )
  {
    *(_DWORD *)(a1 + 100) = 4;
    if ( v2 == 5 )
    {
      *(_DWORD *)(result + 4) = sub_6F871D60;
      result = sub_6F871964(a1);
    }
    else
    {
      if ( v2 != 4 )
        goto LABEL_7;
      *(_DWORD *)(result + 4) = sub_6F871C8C;
    }
  }
  else if ( v3 == 1 )
  {
    *(_DWORD *)(a1 + 100) = 1;
    if ( v2 != 1 && v2 != 3 )
    {
      if ( v2 == 2 )
      {
        *(_DWORD *)(result + 4) = sub_6F871B64;
        v5 = *(_DWORD *)(a1 + 436);
        result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 3072);
        *(_DWORD *)(v5 + 24) = result;
        v6 = 0x8000;
        v7 = 0;
        v8 = 0;
        do
        {
          *(_DWORD *)result = v8;
          *(_DWORD *)(result + 1024) = v7;
          *(_DWORD *)(result + 2048) = v6;
          v8 += 19595;
          result += 4;
          v7 += 38470;
          v6 += 7471;
        }
        while ( v8 != 5016320 );
        goto LABEL_8;
      }
      goto LABEL_7;
    }
    *(_DWORD *)(result + 4) = sub_6F871E94;
    if ( *(_DWORD *)(a1 + 36) > 1 )
    {
      v11 = 88;
      result = 1;
      do
      {
        *(_BYTE *)(*(_DWORD *)(a1 + 196) + v11 + 52) = 0;
        ++result;
        v11 += 88;
      }
      while ( *(_DWORD *)(a1 + 36) > result );
    }
  }
  else
  {
    if ( v3 != v2 )
    {
LABEL_7:
      v4 = *(_DWORD *)a1;
      *(_DWORD *)(v4 + 20) = 28;
      result = (*(int (__cdecl **)(int))v4)(a1);
      goto LABEL_8;
    }
    *(_DWORD *)(a1 + 100) = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(result + 4) = sub_6F871C8C;
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 74) )
  {
    *(_DWORD *)(a1 + 104) = 1;
  }
  else
  {
    result = *(_DWORD *)(a1 + 100);
    *(_DWORD *)(a1 + 104) = result;
  }
  return result;
}
