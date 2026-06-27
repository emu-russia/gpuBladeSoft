unsigned int __thiscall sub_6F695280(void *this, const char *a2)
{
  char *v2; // edi@1
  char **v3; // esi@2
  unsigned int result; // eax@2
  size_t v5; // ebx@2
  char *v6; // eax@9

  v2 = (char *)this + 8;
  *(_DWORD *)this = (char *)this + 8;
  if ( !a2 )
    sub_6F95AFD0("basic_string::_M_construct null not valid");
  v3 = (char **)this;
  result = strlen(a2);
  v5 = result;
  if ( result > 0xF )
  {
    v6 = (char *)sub_6F961B60(result + 1);
    v3[2] = (char *)v5;
    *v3 = v6;
    v2 = v6;
    goto LABEL_10;
  }
  if ( result != 1 )
  {
    if ( !result )
      goto LABEL_5;
LABEL_10:
    result = (unsigned int)memcpy(v2, a2, v5);
    v2 = *v3;
    goto LABEL_5;
  }
  result = *a2;
  *((_BYTE *)v3 + 8) = result;
LABEL_5:
  v3[1] = (char *)v5;
  v2[v5] = 0;
  return result;
}
