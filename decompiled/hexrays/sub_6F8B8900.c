char *__usercall sub_6F8B8900@<eax>(char a1@<al>, _DWORD **a2@<edx>, _DWORD **a3@<ecx>, char **a4)
{
  _DWORD **v4; // esi@1
  char *v5; // ebx@3
  char *v6; // edx@3
  char *result; // eax@8
  unsigned int v8; // esi@9
  unsigned int v9; // ecx@13
  int v10; // edi@14
  int v11; // ecx@18
  int v12; // edi@19
  _DWORD **v13; // [sp+Ch] [bp-20h]@1

  v4 = a3;
  v13 = a2;
  if ( a1 == 80 )
  {
    v8 = ((unsigned int)a3 + 3) & 0xFFFFFFFC;
    *a4 = *(char **)v8;
    result = (char *)(v8 + 4);
  }
  else
  {
    switch ( a1 & 0xF )
    {
      case 0:
      case 3:
      case 0xB:
        v5 = (char *)*a3;
        v6 = (char *)(a3 + 1);
        break;
      case 4:
      case 0xC:
        v5 = (char *)*a3;
        v6 = (char *)(a3 + 2);
        break;
      case 0xA:
        v5 = (char *)*(_WORD *)a3;
        v6 = (char *)a3 + 2;
        break;
      case 9:
        v6 = (char *)a3;
        v5 = 0;
        v9 = 0;
        do
        {
          v10 = (*(++v6 - 1) & 0x7F) << v9;
          v9 += 7;
          v5 = (char *)(v10 | (unsigned int)v5);
        }
        while ( *(v6 - 1) < 0 );
        if ( v9 > 0x1F || !(*(v6 - 1) & 0x40) )
          break;
        v5 = (char *)((-1 << v9) | (unsigned int)v5);
        goto LABEL_5;
      case 1:
        v6 = (char *)a3;
        v5 = 0;
        v11 = 0;
        do
        {
          v12 = (*(++v6 - 1) & 0x7F) << v11;
          v11 += 7;
          v5 = (char *)(v12 | (unsigned int)v5);
        }
        while ( *(v6 - 1) < 0 );
        break;
      case 2:
        v5 = (char *)*(_WORD *)a3;
        v6 = (char *)a3 + 2;
        break;
      default:
        abort();
        return result;
    }
    if ( !v5 )
      goto LABEL_8;
LABEL_5:
    if ( (a1 & 0x70) != 16 )
      v4 = v13;
    v5 = &v5[(_DWORD)v4];
    if ( a1 >= 0 )
    {
LABEL_8:
      *a4 = v5;
      return v6;
    }
    *a4 = *(char **)v5;
    result = v6;
  }
  return result;
}
