void *__thiscall sub_6F93A430(void **this, unsigned int a2, char a3)
{
  void **v3; // ebx@1
  unsigned int v4; // edx@1
  char v5; // si@1
  void *result; // eax@2
  unsigned int v7; // edx@8

  v3 = this;
  v4 = a2;
  v5 = a3;
  if ( a2 > 0xF )
  {
    result = sub_6F93C230(&a2, 0);
    *v3 = result;
    v4 = a2;
    v3[2] = (void *)a2;
  }
  else
  {
    result = *this;
  }
  if ( !v4 )
    goto LABEL_6;
  if ( v4 != 1 )
  {
    memset(result, v5, v4);
    v4 = a2;
    result = *v3;
LABEL_6:
    v3[1] = (void *)v4;
    *((_BYTE *)result + v4) = 0;
    return result;
  }
  *(_BYTE *)result = v5;
  v7 = a2;
  result = *v3;
  v3[1] = (void *)a2;
  *((_BYTE *)result + v7) = 0;
  return result;
}
