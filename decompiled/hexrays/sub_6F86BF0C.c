unsigned int __cdecl sub_6F86BF0C(int a1)
{
  int v1; // esi@1
  unsigned int result; // eax@3
  int v3; // eax@5
  int v4; // eax@11
  int v5; // eax@17
  int v6; // eax@23
  int v7; // eax@27
  int v8; // eax@30
  int v9; // eax@32
  int v10; // eax@36

  v1 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 12);
  *(_DWORD *)(a1 + 392) = v1;
  *(_DWORD *)v1 = sub_6F86BF04;
  if ( *(_DWORD *)(a1 + 40) <= 5u )
  {
    switch ( *(_DWORD *)(a1 + 40) )
    {
      case 0:
        goto LABEL_2;
      case 1:
        if ( *(_DWORD *)(a1 + 36) == 1 )
          goto LABEL_3;
        break;
      case 2:
      case 3:
        if ( *(_DWORD *)(a1 + 36) != 3 )
          break;
        goto LABEL_3;
      case 4:
      case 5:
        if ( *(_DWORD *)(a1 + 36) == 4 )
          goto LABEL_3;
        break;
    }
  }
  else
  {
LABEL_2:
    if ( *(_DWORD *)(a1 + 36) > 0 )
      goto LABEL_3;
  }
  v4 = *(_DWORD *)a1;
  *(_DWORD *)(v4 + 20) = 10;
  (*(void (__cdecl **)(int))v4)(a1);
LABEL_3:
  result = *(_DWORD *)(a1 + 80);
  if ( result <= 5 )
  {
    switch ( result )
    {
      default:
        goto LABEL_4;
      case 1u:
        if ( *(_DWORD *)(a1 + 76) != 1 )
        {
          v5 = *(_DWORD *)a1;
          *(_DWORD *)(v5 + 20) = 11;
          (*(void (__cdecl **)(int))v5)(a1);
        }
        result = *(_DWORD *)(a1 + 40);
        if ( result == 1 || result == 3 )
        {
          *(_DWORD *)(v1 + 4) = sub_6F86BDB0;
        }
        else
        {
          if ( result != 2 )
            goto LABEL_30;
          *(_DWORD *)v1 = sub_6F86BA1C;
          *(_DWORD *)(v1 + 4) = sub_6F86BBF0;
        }
        return result;
      case 2u:
        if ( *(_DWORD *)(a1 + 76) != 3 )
        {
          v6 = *(_DWORD *)a1;
          *(_DWORD *)(v6 + 20) = 11;
          result = (*(int (__cdecl **)(int))v6)(a1);
        }
        if ( *(_DWORD *)(a1 + 40) != 2 )
          goto LABEL_30;
        *(_DWORD *)(v1 + 4) = sub_6F86BE08;
        return result;
      case 3u:
        if ( *(_DWORD *)(a1 + 76) != 3 )
        {
          v7 = *(_DWORD *)a1;
          *(_DWORD *)(v7 + 20) = 11;
          (*(void (__cdecl **)(int))v7)(a1);
        }
        result = *(_DWORD *)(a1 + 40);
        if ( result == 2 )
        {
          *(_DWORD *)v1 = sub_6F86BA1C;
          *(_DWORD *)(v1 + 4) = sub_6F86BAF4;
          return result;
        }
        if ( result == 3 )
          break;
        goto LABEL_30;
      case 4u:
        if ( *(_DWORD *)(a1 + 76) != 4 )
        {
          v9 = *(_DWORD *)a1;
          *(_DWORD *)(v9 + 20) = 11;
          result = (*(int (__cdecl **)(int))v9)(a1);
        }
        if ( *(_DWORD *)(a1 + 40) == 4 )
          break;
        goto LABEL_30;
      case 5u:
        if ( *(_DWORD *)(a1 + 76) != 4 )
        {
          v10 = *(_DWORD *)a1;
          *(_DWORD *)(v10 + 20) = 11;
          (*(void (__cdecl **)(int))v10)(a1);
        }
        result = *(_DWORD *)(a1 + 40);
        if ( result == 4 )
        {
          *(_DWORD *)v1 = sub_6F86BA1C;
          *(_DWORD *)(v1 + 4) = sub_6F86BC80;
          return result;
        }
        if ( result != 5 )
        {
LABEL_30:
          v8 = *(_DWORD *)a1;
          *(_DWORD *)(v8 + 20) = 28;
          return (*(int (__cdecl **)(int))v8)(a1);
        }
        break;
    }
  }
  else
  {
LABEL_4:
    if ( result != *(_DWORD *)(a1 + 40) || (result = *(_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 76) != result) )
    {
      v3 = *(_DWORD *)a1;
      *(_DWORD *)(v3 + 20) = 28;
      result = (*(int (__cdecl **)(int))v3)(a1);
    }
  }
  *(_DWORD *)(v1 + 4) = sub_6F86BE8C;
  return result;
}
