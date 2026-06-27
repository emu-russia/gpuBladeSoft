void *__thiscall sub_6F93D320(void **this, const void *a2, int a3, int a4)
{
  void **v4; // esi@1
  unsigned int v5; // edx@1
  void *result; // eax@2
  void *v7; // [sp+1Ch] [bp-10h]@1

  v4 = this;
  v5 = (a3 - (signed int)a2) >> 1;
  v7 = (void *)v5;
  if ( v5 > 7 )
  {
    result = sub_6F93F180((unsigned int *)&v7, 0);
    *v4 = result;
    v4[2] = v7;
    goto LABEL_8;
  }
  result = *this;
  if ( v5 != 1 )
  {
    if ( !v5 )
      goto LABEL_4;
LABEL_8:
    memcpy(result, a2, a3 - (_DWORD)a2);
    v5 = (unsigned int)v7;
    result = *v4;
    goto LABEL_4;
  }
  *(_WORD *)result = *(_WORD *)a2;
LABEL_4:
  v4[1] = (void *)v5;
  *((_WORD *)result + v5) = 0;
  return result;
}
